#include <iostream>
#include <fstream>
#include <set>
#include <cctype>

// Функція для визначення, чи є символ приголосною літерою
bool isConsonant(char c) {
    std::string consonants = "bcdfghjklmnpqrstvwxyz";
    return consonants.find(c) != std::string::npos; 
}
// Функція, що перевіряє, чи містить слово подвоєння приголосних літер
bool hasDoubleConsonant(const std::string& word) {
    for (int i = 1; i < word.length(); ++i) {
        if (isConsonant(word[i]) && word[i] == word[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    // Відкриття файлу
    std::ifstream file("C:\\Users\\vika\\Desktop\\test1.txt");
    if (!file) {
        std::cerr << "Не вдалося відкрити файл.\n";
        return 1;
    }
    // Множина для зберігання унікальних слів
    std::set<std::string> uniqueWords;
    std::string word;
    while (file >> word) {
        // Змінна для очищення слова від знаків пунктуації
        std::string cleanedWord;
        for (char c : word) {
            // Якщо символ є літерою, він додається до очищеного слова
            if (std::isalpha(c)) {
                cleanedWord += c;
            }
        }
        // Перевіряємо, чи очищене слово не є порожнім, не перевищує 30 символів та містить подвоєння приголосних
        if (!cleanedWord.empty() && cleanedWord.length() <= 30 && hasDoubleConsonant(cleanedWord)) {
            uniqueWords.insert(cleanedWord);
        }
    }
    // Виведення унікальних слів, що містять подвоєні приголосні
    for (const auto& w : uniqueWords) {
        std::cout << w << std::endl;
    }

    return 0;
}

