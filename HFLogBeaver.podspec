#
# Be sure to run `pod lib lint HFLogBeaver.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HFLogBeaver'
  s.version          = '2.0.2'
  s.summary          = '日志打印工具'
  s.description      = <<-DESC
  面向 iOS、macOS 与 Mac Catalyst 的日志打印二进制组件，提供统一的日志输出能力。
                       DESC
  s.homepage         = 'https://github.com/Components-iOS/HFLogBeaver'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liuhongfei' => '13718045729@163.com' }
  s.source           = { :git => 'https://github.com/Components-iOS/HFLogBeaver.git', :tag => s.version.to_s }
  s.ios.deployment_target = '12.0'
  s.osx.deployment_target = '11.5'
  s.vendored_frameworks = 'HFLogBeaver/Classes/HFLogBeaver.xcframework'
end
