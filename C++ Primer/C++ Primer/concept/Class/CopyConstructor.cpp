//#include <iostream>
//#include <string>
//using namespace std;
//
//class String {
//private:
//	char* m_Buffer;
//	unsigned int m_size;
//public:
//	String(const char* string) {
//		m_size = strlen(string);
//		m_Buffer = new char[m_size+1];
//		memcpy(m_Buffer, string, m_size);
//		m_Buffer[m_size] = 0;
//	}
//
//	//¿½±´¹¹Ôìº¯Êý
//	String(const String& other) 
//		:m_size(other.m_size) {
//		m_Buffer = new char[m_size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_size + 1);
//	}
//
//	~String() {
//		delete m_Buffer;
//	}
//
//	char& operator[](unsigned int index) {
//		return m_Buffer[index];
//	}
//
//	friend ostream& operator<<(ostream& stream, const String& string);
//};
//
//ostream& operator<<(ostream& stream, const String& string) {
//	stream << string.m_Buffer;
//	return stream;
//}
//
//int main() {
//	String string = "cloud";
//	String second = string;
//
//	second[0] = 'A';
//
//	cout << string << endl;
//	cout << second << endl;
//	cin.get();
//}