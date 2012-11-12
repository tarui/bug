#include "ruby.h"


static VALUE
bug_s_raise(int argc, VALUE *argv, VALUE self)
{
    VALUE str=Qnil;
    rb_scan_args(argc, argv, "01", &str);
    if(str!=Qnil){
	StringValue(str);
	rb_bug("%s",RSTRING_PTR(str));
	RB_GC_GUARD(str);
    }else{
	rb_bug("Bug.raise");
    }
    return self;
}    

void
Init_bug(void)
{
    VALUE cBug;
    cBug = rb_define_module("Bug");
    rb_define_singleton_method(cBug, "raise", bug_s_raise,-1);
}
