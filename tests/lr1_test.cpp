#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class FirstElementTest : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    void SetUp() override {
        // Например, инициализация данных
        arr = { 97.5, 100.00000001, 100.000001, 100.000004, 123, 234.98716 };
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        arr.clear();
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::vector<float> arr;
    std::pair<int, float> result;
};

// Пример теста1
TEST_F(FirstElementTest, CTest1) {
// Вызываем функцию firstElement с тестовыми данными
    result = firstElement(arr);

// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 3);
    EXPECT_EQ(result.second, 1);
}

// Пример теста111111
//TEST_F(CountAndSumTest, CTest11111) {
//// Вызываем функцию countAndSum с тестовыми данными
//    result = countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 5);
//    EXPECT_EQ(result.second, 100);
//}

// Пример теста 2
//TEST_F(CountAndSumTest, CTest2) {
//// Вызываем функцию countAndSum с тестовыми данными
//    result = countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 15);
//    EXPECT_EQ(result.second, 100);
//}

// Пример теста3
//TEST(CountAndSumTest1, CTest3) {
//    // Объявляем переменные, которые будут использоваться в тесте
//    std::vector<int> arr;
//    std::pair<int, int> result;
//    // Инициализация данных
//    arr = {10, 14, 15, 20, 21, 25, 30, 35, 5};
//// Вызываем функцию countAndSum с тестовыми данными
//    result = countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 6);
//    EXPECT_EQ(result.second, 105);
//}
