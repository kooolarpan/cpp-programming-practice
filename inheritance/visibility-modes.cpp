// Visibility Modes in Inheritance in C++

// 1.Public Inheritance (Derivation)
class ParentClass {
    int a;

   protected:
    int b;

   public:
    int c;
};

class ChildClass : public ParentClass {
    // a is not inherited
    // b is protected
    // c is public
};

// 2. Private Inheritance (Derivation)
class ParentClass {
    int a;

   protected:
    int b;

   public:
    int c;
};

class ChildClass : private ParentClass {
    // a is not inherited
    // b is private
    // c is private
};

// 3. Protected Inheritance (Derivation)
class ParentClass {
    int a;

   protected:
    int b;

   public:
    int c;
};

class ChildClass : protected ParentClass {
    // a is not inherited
    // b is protected
    // c is protected
};