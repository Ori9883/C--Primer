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
//		//Ψһָ��
//		//std::unique_ptr<Entity> entity(new Entity());
//		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //������һ�ֺã��쳣��ȫ�������캯���׳��쳣���������һ�ֺ�
//		
//		//����ָ��
//		std::shared_ptr<Entity> sharedPointer = std::make_shared<Entity>();
//
//		std::shared_ptr<Entity> sharedPointer_copy = sharedPointer;
//
//		//��ָ��
//		std::weak_ptr<Entity> weakptr = sharedPointer;
//
//		entity->Print();
//
//		  
//	}
//
//	std::cin.get();
//}