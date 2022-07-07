//#include <iostream>
//#include <string>
//#include <memory>
//
//class  Entity
//{
//public:
//	Entity() {
//		std::cout << "Create Entity" << std::endl;
//	}
//
//	~Entity() {
//		std::cout << "Destroyed Entity" << std::endl;
//	}
//
//	void Print(){}
//};
//
//int main() {
//
//	{
//		//唯一指针
//		//std::unique_ptr<Entity> entity(new Entity());
//		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //比上面一种好，异常安全（当构造函数抛出异常，他会比上一种好
//		
//		//共享指针
//		std::shared_ptr<Entity> sharedPointer = std::make_shared<Entity>();
//
//		std::shared_ptr<Entity> sharedPointer_copy = sharedPointer;
//
//		//弱指针
//		std::weak_ptr<Entity> weakptr = sharedPointer;
//
//		entity->Print();
//
//		  
//	}
//
//	std::cin.get();
//}