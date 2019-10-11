Pod::Spec.new do |s|
  s.name = "LYZStatistic"
  s.version = "0.1.1"
  s.summary = "A short description of LYZStatistic."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"流浪者"=>"1286041054@qq.com"}
  s.homepage = "https://github.com/LYZName/LYZStatistic"
  s.description = "Guide for private pods"
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/LYZStatistic.embeddedframework/LYZStatistic.framework'
end
