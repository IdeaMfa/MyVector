# MyVectorLib

🚀 **MyVectorLib** is a lightweight, header-only, generic C++ vector class implemented from scratch. It mimics the behavior of `std::vector`, making it perfect for learning about pointers, memory management, templates, and C++ class design.

---

## 📦 Features

- ✅ Header-only — just include and use
- ✅ Templated — supports any data type
- ✅ Dynamic resizing
- ✅ `PushBack()` and `PopBack()` functionality
- ✅ Indexing with bounds checking (`operator[]`)
- ✅ Easy to read and extend

---

## 🔧 Installation

### Option 1: Manual

Clone the repo and include the header in your project:

```bash
git clone https://github.com/yourusername/MyVectorLib.git
```

Then include it in your code:

```cpp
#include <MyVector.hpp>
```

And tell your compiler where to find it:

```bash
-I/path/to/MyVectorLib/include
```

### Option 2: CMake

Add this library to your project using `add_subdirectory`:

```cmake
add_subdirectory(MyVectorLib)
target_link_libraries(YourApp PRIVATE MyVector::MyVector)
```

Or install it and use `find_package`:

```bash
cd MyVectorLib
cmake -B build -DCMAKE_INSTALL_PREFIX=install
cmake --build build --target install
```

In your consumer project:

```cmake
find_package(MyVector REQUIRED PATHS /path/to/MyVectorLib/build/install/lib/cmake/MyVector)
target_link_libraries(YourApp PRIVATE MyVector::MyVector)
```

---

## 🧪 Usage Example

```cpp
#include <MyVector.hpp>
#include <string>

int main() {
    MyVector::MyVector<std::string> vec;
    vec.PushBack("Fatih");
    vec.PushBack("Rocks");
    vec.Print(); // Output: [Fatih, Rocks]
}
```

---

## 📁 Folder Structure

```
MyVectorLib/
├── include/
│   └── MyVector.hpp     # Main header file
├── examples/
│   └── main.cpp         # Sample usage
├── CMakeLists.txt
├── README.md
└── LICENSE
```

---

## 📜 License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Author

Built by [Fatih Aytar](https://github.com/IdeaMfa) — passionate about C++, software craftsmanship, and open-source learning.
