#
# Be sure to run `pod lib lint HFLogBeaver.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HFLogBeaver'
  s.version          = '1.0.0'
  s.summary          = '日志打印工具'
  s.description      = <<-DESC
  日志打印
                       DESC
  s.homepage         = 'https://github.com/Components-iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liuhongfei' => '13718045729@163.com' }
  s.source           = { :git => 'https://github.com/Components-iOS/HFLogBeaver.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'
  s.platform         = :ios
  s.xcconfig              = { "BUILD_LIBRARY_FOR_DISTRIBUTION" => "YES" }
  s.pod_target_xcconfig   = { "VALID_ARCHS" => "arm64 armv7 x86_64", "DEFINES_MODULE" => "YES" }
  s.user_target_xcconfig  = { "VALID_ARCHS" => "arm64 armv7 x86_64", "DEFINES_MODULE" => "YES" }
  s.vendored_frameworks = 'HFLogBeaver/Classes/HFLogBeaver.xcframework'
end
