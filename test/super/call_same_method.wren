class Base {
  foo {
    io.write("Base.foo")
  }
}

class Derived is Base {
  foo {
    io.write("Derived.foo")
    super.foo
  }
}

(new Derived).foo
// expect: Derived.foo
// expect: Base.foo
