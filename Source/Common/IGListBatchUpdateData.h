/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <IGListKit/IGListMacros.h>
#import <IGListKit/IGListMoveIndex.h>
#import <IGListKit/IGListMoveIndexPath.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An instance of `IGListBatchUpdateData` takes section indexes and item index paths 
 and performs cleanup on init in order to perform a crash-free
 update via `-[UICollectionView performBatchUpdates:completion:]`.
 */
IGLK_SUBCLASSING_RESTRICTED
NS_SWIFT_NAME(ListBatchUpdateData)
@interface IGListBatchUpdateData : NSObject

/**
 Section insert indexes.
 */
@property (nonatomic, strong, readonly) NSIndexSet *insertSections;

/**
 Section delete indexes.
 */
@property (nonatomic, strong, readonly) NSIndexSet *deleteSections;

/**
 Section moves.
 */
@property (nonatomic, strong, readonly) NSSet<IGListMoveIndex *> *moveSections;

/**
 Item insert index paths.
 */
@property (nonatomic, strong, readonly) NSSet<NSIndexPath *> *insertIndexPaths;

/**
 Item delete index paths.
 */
@property (nonatomic, strong, readonly) NSSet<NSIndexPath *> *deleteIndexPaths;

/**
 Item moves.
 */
@property (nonatomic, strong, readonly) NSSet<IGListMoveIndexPath *> *moveIndexPaths;

/**
 Creates a new batch update object with section and item operations.

 @param insertSections   Section indexes to insert.
 @param deleteSections   Section indexes to delete.
 @param moveSections     Section moves.
 @param insertIndexPaths Item index paths to insert.
 @param deleteIndexPaths Item index paths to delete.
 @param moveIndexPaths   Item index paths to move.

 @return A new batch update object.
 */
- (instancetype)initWithInsertSections:(NSIndexSet *)insertSections
                        deleteSections:(NSIndexSet *)deleteSections
                          moveSections:(NSSet<IGListMoveIndex *> *)moveSections
                      insertIndexPaths:(NSSet<NSIndexPath *> *)insertIndexPaths
                      deleteIndexPaths:(NSSet<NSIndexPath *> *)deleteIndexPaths
                        moveIndexPaths:(NSSet<IGListMoveIndexPath *> *)moveIndexPaths NS_DESIGNATED_INITIALIZER;

/**
 :nodoc:
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 */
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
