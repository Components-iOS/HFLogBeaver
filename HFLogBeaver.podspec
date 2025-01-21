#
# Be sure to run `pod lib lint HFLogBeaver.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HFLogBeaver'
  s.version          = '0.1.0'
  s.summary          = '日志打印工具'
  s.description      = <<-DESC
  日志打印
                       DESC
  s.homepage         = 'https://github.com/Components-iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liuhongfei' => '13718045729@163.com' }
  s.source           = { :git => 'https://github.com/liuhongfei/HFLogBeaver.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'HFLogBeaver/Classes/HFLogBeaver.xcframework'
end
