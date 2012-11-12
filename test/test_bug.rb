require 'helper'

class TestBug < Test::Unit::TestCase
  def test_something_for_real
    #flunk "hey buddy, you should probably rename this file and start testing for real"
    skip "hey buddy, you should probably rename this file and start testing for real"
  end
end
