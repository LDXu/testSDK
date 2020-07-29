Pod::Spec.new do |s|
  s.name = "HTHJWebKit"
  s.version = "0.0.1"
  s.summary = "HTHJWebKit."
  s.license = {"type"=>"MIT", "file"=>"FILE_LICENSE"}
  s.authors = {"C503"=>"123495351@qq.com"}
  s.homepage = "https://github.com/LDXu/testSDK"
  s.description = "this is HTHJWebKit"
  s.frameworks = ["CoreImage", "Photos", "WebKit", "AVFoundation", "CoreMedia"]
  s.requires_arc = true
  s.source = { :git => "https://github.com/LDXu/testSDK.git", :tag => "#{s.version}" }
  s.resource = 'JSResources.bundle'
  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/HTHJWebKit.embeddedframework/HTHJWebKit.framework'
  s.dependency "ZLPhotoBrowser" , '3.1.4'
  s.dependency "YBPopupMenu"
end
