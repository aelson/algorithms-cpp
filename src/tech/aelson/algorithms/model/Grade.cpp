#include <string>

class Grade {
private:
    std::string studentName;
    double result;

public:
    Grade(const std::string& studentName, double result) : studentName(studentName), result(result) {}
    Grade() {}

    double getResult() const {
        return result;
    }

    std::string getStudentName() const {
        return studentName;
    }
};
