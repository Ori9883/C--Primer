//#include <iostream>
//#include <string>
//
//
//class Printable {
//public:
//	virtual std::string GetClassName() = 0;
//};
//
//class A : public Printable{
//public:
//	virtual std::string GetName() { return "A"; }
//	std::string GetClassName() override { return "A interface"; }
//};
//
//class B : public A , Printable{
//private:
//	std::string myName;
//public:
//	B(const std::string& name) : myName(name){}
//
//	std::string GetName() override { return myName; }
//	std::string GetClassName() override { return "B interface"; }
//};
//
//void Print(Printable* obj) {
//	std::cout << obj->GetClassName() << std::endl;
//}
//
//int main() {
//	A* a = new A();
//	//std::cout << a->GetName() << std::endl;
//
//	B* b = new B("cloud");
//	//std::cout << b->GetName() << std::endl;
//
//
//	Print(a);
//	Print(b);
//	return 0;
//}