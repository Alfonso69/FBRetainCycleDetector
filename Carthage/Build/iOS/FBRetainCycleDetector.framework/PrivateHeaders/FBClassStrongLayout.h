/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

@protocol FBObjectReference;
/**
 @return An array of id<FBObjectReference> objects that will have *all* references
 the object has (also not retained ivars, structs etc.)
 */
NSArray<id<FBObjectReference>> *FBGetClassReferences(__unsafe_unretained Class aCls);

/**
 @return An array of id<FBObjectReference> objects that will have only those references
 that are retained by the object. It also goes through parent classes.
 */
NSArray<id<FBObjectReference>> *FBGetObjectStrongReferences(id obj);

#ifdef __cplusplus
}
#endif