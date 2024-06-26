//
// Created by Artem on 28.05.2024.
//

#ifndef LABA13_UNORDERED_ARRAY_SET_H
#define LABA13_UNORDERED_ARRAY_SET_H

#include <stdint.h>
#include <assert.h>
#include <memory.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../algorithms/array/array.h"

typedef struct unordered_array_set {
    int* data;
    size_t size;
    size_t capacity;
} unordered_array_set;

// возвращает пустое множество для capacity элементов.
unordered_array_set unordered_array_set_create(size_t capacity);

// возвращает множество, состоящее из элементов массива a размера size.
unordered_array_set unordered_array_set_create_from_array(const int* a, size_t size);

// возвращает позицию элемента в множестве, если значение value имеется в множестве set, иначе n.
size_t unordered_array_set_in(unordered_array_set* set, int value);

// возвращает true, если subset является подмножеством set, инчае false.
bool unordered_array_set_is_subset(unordered_array_set subset, unordered_array_set set);

// возвращает true, если элементы множеств set1 и set2 равны, иначе false.
bool unordered_array_set_is_equal(unordered_array_set set1, unordered_array_set set2);

// возбуждает исключение, если в множестве по адресу set нельзя вставить элемент.
void unordered_array_set_is_able_append(unordered_array_set *set);

// добавляет элемент value в множество set.
void unordered_array_set_insert(unordered_array_set* set, int value);

// удалить элемент value из множества set.
void unordered_array_set_delete_element(unordered_array_set* set, int value);

// возвращает объединение множеств set1 и set2.
unordered_array_set unordered_array_set_union(unordered_array_set set1, unordered_array_set set2);

// возвращает пересечение множеств set1 и set2.
unordered_array_set unordered_array_set_intersection(unordered_array_set set1, unordered_array_set set2);

// возвращает разность множеств set1 и set2.
unordered_array_set unordered_array_set_difference(unordered_array_set set1, unordered_array_set set2);

// возвращает дополнение множества set до универсума universum_set.
unordered_array_set unordered_array_set_complement(unordered_array_set set, unordered_array_set universum_set);

// возвращает симметричную разность множеств set1 и set2.
unordered_array_set unordered_array_set_symmetric_difference(unordered_array_set set1, unordered_array_set set2);

// вывод множества set.
void unordered_array_set_print(unordered_array_set set);

// освобождает память, занимаемую множеством set.
void unordered_array_set_delete(unordered_array_set* set);

#endif //LABA13_UNORDERED_ARRAY_SET_H
