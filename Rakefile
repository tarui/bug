# encoding: utf-8

require 'rubygems'
require 'rake'

require 'jeweler'
Jeweler::Tasks.new do |gem|
  # gem is a Gem::Specification... see http://docs.rubygems.org/read/chapter/20 for more options
  gem.name = "bug"
  gem.homepage = "http://github.com/tarui/bug"
  gem.license = "MIT"
  gem.summary = %Q{we can encounter a Bug everywhere!}
  gem.description = %Q{we can encounter a Bug everywhere!
  Bug.raise call bug backtrace
}
  gem.email = "tarui@prx.jp"
  gem.authors = ["Masaya TARUI"]
  # Include your dependencies below. Runtime dependencies are required when using your gem,
  # and development dependencies are only needed for development (ie running rake tasks, tests, etc)
  #  gem.add_runtime_dependency 'jabber4r', '> 0.1'
  #  gem.add_development_dependency 'rspec', '> 1.2.3'
  #  gem.add_development_dependency "rdoc", "~> 3.12"
  gem.add_development_dependency "bundler", "~> 1.0"
  gem.add_development_dependency "jeweler", "~> 1.8.4"
  #  gem.add_development_dependency "rcov", ">= 0"
end
Jeweler::RubygemsDotOrgTasks.new

require 'rake/testtask'
Rake::TestTask.new(:test) do |test|
  test.libs << 'lib' << 'test'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
end

=begin
require 'rcov/rcovtask'
Rcov::RcovTask.new do |test|
  test.libs << 'test'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
  test.rcov_opts << '--exclude "gems/*"'
end
=end

task :default => :test

require 'rdoc/task'
Rake::RDocTask.new do |rdoc|
  version = File.exist?('VERSION') ? File.read('VERSION') : ""

  rdoc.rdoc_dir = 'rdoc'
  rdoc.title = "bug #{version}"
  rdoc.rdoc_files.include('README*')
  rdoc.rdoc_files.include('lib/**/*.rb')
end
