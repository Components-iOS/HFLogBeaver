#!/bin/bash

# 设置变量
PROJECT_PATH="HFLogBeaver.xcodeproj"
SCHEME="HFLogBeaver"
SIMULATOR_DESTINATION="platform=iOS Simulator,name=iPhone 16,OS=18.1"
DEVICE_DESTINATION="generic/platform=iOS"
FRAMEWORK_NAME="HFLogBeaver"

# 输出目录
UNIVERSAL_OUTPUT_FOLDER="${PWD}/Dist"
XCFRAMEWORK_OUTPUT_FOLDER="${UNIVERSAL_OUTPUT_FOLDER}/XCFramework"

# 清理之前的输出目录
rm -rf "${UNIVERSAL_OUTPUT_FOLDER}"

# 确保输出目录存在
mkdir -p "$XCFRAMEWORK_OUTPUT_FOLDER"

# 清理 Debug 构建（模拟器）
xcodebuild -project "$PROJECT_PATH" \
           -scheme "$SCHEME" \
           -configuration Debug \
           -sdk iphonesimulator \
           -destination "$SIMULATOR_DESTINATION" \
           ONLY_ACTIVE_ARCH=YES \
           ARCHS="x86_64" \
           -derivedDataPath "${UNIVERSAL_OUTPUT_FOLDER}/Simulator" \
           clean

# 构建 Debug（模拟器）
xcodebuild -project "$PROJECT_PATH" \
           -scheme "$SCHEME" \
           -configuration Debug \
           -sdk iphonesimulator \
           -destination "$SIMULATOR_DESTINATION" \
           ONLY_ACTIVE_ARCH=YES \
           ARCHS="x86_64" \
           -derivedDataPath "${UNIVERSAL_OUTPUT_FOLDER}/Simulator" \
           build -verbose

# 清理 Release 构建（真机）
xcodebuild -project "$PROJECT_PATH" \
           -scheme "$SCHEME" \
           -configuration Release \
           -sdk iphoneos \
           -destination "$DEVICE_DESTINATION" \
           ONLY_ACTIVE_ARCH=NO \
           -derivedDataPath "${UNIVERSAL_OUTPUT_FOLDER}/Device" \
           clean

# 构建 Release（真机）
xcodebuild -project "$PROJECT_PATH" \
           -scheme "$SCHEME" \
           -configuration Release \
           -sdk iphoneos \
           -destination "$DEVICE_DESTINATION" \
           ONLY_ACTIVE_ARCH=NO \
           -derivedDataPath "${UNIVERSAL_OUTPUT_FOLDER}/Device" \
           build -verbose

# 创建 XCFramework
echo "Creating XCFramework..."
xcodebuild -create-xcframework \
           -framework "${UNIVERSAL_OUTPUT_FOLDER}/Simulator/Build/Products/Debug-iphonesimulator/${FRAMEWORK_NAME}.framework" \
           -framework "${UNIVERSAL_OUTPUT_FOLDER}/Device/Build/Products/Release-iphoneos/${FRAMEWORK_NAME}.framework" \
           -output "${XCFRAMEWORK_OUTPUT_FOLDER}/${FRAMEWORK_NAME}.xcframework"

if [ $? -ne 0 ]; then
    echo "XCFramework creation failed."
    exit 1
fi

echo "XCFramework created successfully at ${XCFRAMEWORK_OUTPUT_FOLDER}/${FRAMEWORK_NAME}.xcframework"

# 打开合并后的文件夹
open "${XCFRAMEWORK_OUTPUT_FOLDER}"
