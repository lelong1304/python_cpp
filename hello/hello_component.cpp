#include <pybind11/pybind11.h>

char version[]="1.0";

char const* getVersion() {
	return version;
}

char const* greet() {
  return "hello, world";
}


class People {
  private:
    std::string firstName;
    std::string lastName;
  public:
    People() {}
    People(const std::string &firstName, const std::string &lastName) : firstName(firstName), lastName(lastName) {}
    const std::string &getFirstName() const {
      return firstName;
    }
    const std::string &getLastName() const {
      return lastName;
    }
    void setFirstName(const std::string &firstName_) { firstName = firstName_; }
    void setLastName(const std::string &lastName_) { lastName = lastName_; }
};
namespace py = pybind11;


PYBIND11_MODULE(hello_component,greetings)
{
  greetings.doc() = "greeting_object 1.0";
  
  greetings.def("greet", &greet, "a function saying hello");
  greetings.def("getVersion", &getVersion, "a function returning the version");

  //
  py::class_<People>(greetings, "People",py::dynamic_attr())
        .def(py::init<const std::string &, const std::string &>())
        .def("setFirstName", &People::setFirstName)
        .def("setLastName", &People::setLastName)
        .def("getFirstName", &People::getFirstName)
        .def("getLastName", &People::getLastName);
 
}
