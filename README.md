# lab1
### 1. Головня Вікторія, група ОМ, варіант 5, Знайти лише ті слова, які мають подвоєні приголосні літери.
### 2.постановка задачі
Мова виконання C++.
Ми маємо текстовий файл, на який не накладаються обмеження щодо
його розміру та довжини рядка в цьому файлі.
Текст складається зі слів, ідентифікатори англійської мови.
Слова перемежовуються проміжками, дужками, кодами операцій, взагалі
символами, що природньо відділяють слово одне від одного. Правопис слів не
має значення. Довжина слова не перевищує 30 літер.
В поле результату потрібно вивести слова без повторень, що
задовольняють умові - знайти лише ті слова, які мають подвоєні приголосні літери.
### 3.логіка алгоритму
  1)Відкриваємо файл для читання.  
  2)Перевіряємо, чи файл вдалося відкрити. Якщо ні, виводимо повідомлення про помилку та завершуємо програму.  
  3)Створюємо множину для зберігання унікальних слів.  
  4)Починаємо читати слова з файлу одне за одним.  
  5)Для кожного слова:  
  -Очищуємо слова від знаків пунктуації,проходимося по кожному символу слова,якщо символ є літерою, додаємо його до рядка очищених слів.  
  -Перевіряємо, чи очищене слово не є порожнім, не перевищує 30 символів та містить подвоєння приголосних.  
  -Якщо всі умови виконуються, додаємо слово до множини унікальних слів.
  6)Виводимо унікальні слова, що містять подвоєні приголосні, на екран.
