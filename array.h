//lang::CwC
#pragma once

#include "object.h"

/**
 * A dynamically-sized Array. Allows read/write operations at a specified index,
 * as well as adding/removing elements at the end of the Array. Will grow to
 * necessary size when appending an item.
 *
 * Author: favorable-mutation <contact@griffin-rademacher.info>
 */
class Array : public Object {
public:
  /* Default constructor instantiating an empty Array. */
  Array() {}

  /**
   * Convenience constructor for providing an initial size.
   *
   * \param initial_size The number of elements the Array should start with.
   *                     Default value for an element is `nullptr`.
   */
  Array(size_t initial_size) {}

  /**
   * Frees memory used by all elements of the Array, as well as objects used by
   * Array's internal implementation.
   */
  ~Array() {}

  /**
   * Checks deep equality of this Array with the given Object.
   *
   * \param o Another Object, which may or may not be an Array.
   *
   * \return Is this Array deeply equal to the other Object?
   */
  bool equals(Object* o) {}

  /**
   * Provides a hash code for this Array, enabling comparison between Arrays.
   *
   * \return A hash code for this Array.
   */
  size_t hash() {}

  /**
   * Counts how many elements are in the Array, including those with default
   * values set by the constructor.
   *
   * \return The amount of elements in the Array.
   */
  size_t size() {}

  /**
   * Gets a reference to the element at the given index of the Array. Will
   * return `nullptr` if the index is out of bounds.
   *
   * Array retains ownership of the element; caller should not delete it.
   *
   * \return A pointer to the element at the given index in this Array.
   */
  Object* get(size_t index){}

  /**
   * Sets the element at the given index of the Array to the given Object.
   *
   * Array relinquishes ownership of the element currently at that index, which
   * is returned to the caller, and takes ownership of the given Object, so the
   * caller should not delete it.
   *
   * \param e The Object to replace the element at the given index in this
   *          Array.
   *
   * \return A pointer to the element that was replaced.
   */
  Object* set(size_t i, Object* e) {}

  /**
   * Adds the Object to the end of the Array (i.e. sets the value at index
   * `array.size()` to be the given item). Array will grow dynamically to
   * support this addition.
   *
   * Array takes ownership of the Object, and will be responsible for deleting
   * it. Client code should not delete the Object unless it has been removed
   * from the Array.
   *
   * \param e The Object to append to the Array.
   */
  void push_back(Object* e) {}

  /**
   * Removes and returns the Object at the last index of the Array (i.e. gets
   * the value at index `array.size() - 1`, then removes it from the Array).
   * Array will shrink accordingly.
   *
   * Popping an item from the Array relinquishes ownership to the caller; Array
   * is no longer responsible for deleting the Object once it has been popped.
   *
   * \return The last element of the Array.
   */
  Object* pop_back() {}

  /**
   * Removes all elements from the Array, which will shrink to become empty.
   *
   * Clearing the Array deletes all of its elements, freeing the memory they
   * occupy.
   */
  void clear() {}
};
