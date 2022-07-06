//class Vector2 {
//private:
//	float x, y;
//public:
//	Vector2(float x,float y): x(x),y(y){}
//
//	Vector2 Add(const Vector2& other) const {
//		return Vector2(x + other.x, y + other.y);
//}
//
//	Vector2 Multiple(const Vector2& other) const {
//		return Vector2(x * other.x, y * other.y);
//	}
//
//	Vector2 operator+(const Vector2& other) const {
//		return Add(other);
//	}
//
//	Vector2 operator*(const Vector2& other) const {
//		return Multiple(other);
//	}
//};
//
//int main() {
//	Vector2 position(1.0f,1.0f);
//	Vector2 speed(0.5f, 0.5f);
//	Vector2 powerup(1.1f, 1.1f);
//
//	Vector2 result1 = position.Add(speed.Multiple(powerup));
//	Vector2 result2 = position + speed * powerup;
//
//
//}