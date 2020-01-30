//lang::CwC
#pragma once

#include <stdio.h>
#include <stdlib.h>

/* Author: sudopluto <sharma.pranav@husky.neu.edu> */

/**
 * If the given predicate is not true, prints the given message to STDERR and
 * exits with status 1.
 *
 * \param pred The predicate to check.
 * \param msg The error message to print if the predicate is false.
 */
void check_assert(bool pred, const char* msg) {
    if (!pred) {
        fprintf(stderr, "%s\n", msg);
        exit(1);
    }
}

/**
 * If the given predicate is not true, prints the current test number and the
 * given message to STDERR, without exiting.
 *
 * \param pred The predicate to check.
 * \param msg The error message to print if the predicate is false.
 */
void check_expect(bool pred, const char* msg) {
    static size_t test_n = 1;
    if (!pred) {
        fprintf(stderr, "test %lu failed: %s\n", test_n, msg);
    }
    ++test_n;
}

/**
 * If the given predicate is not true, prints the current test number to
 * STDERR, without exiting.
 *
 * \param pred The predicate to check.
 */
void check_expect(bool pred) {
    check_expect(pred, "");
}
