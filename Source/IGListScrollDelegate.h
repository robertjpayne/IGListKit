/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@class IGListAdapter;
@class IGListSectionController;

@protocol IGListSectionType;

/**
 Implement this protocol to receive display events for a section controller when it is on screen.
 */
NS_SWIFT_NAME(ListScrollDelegate)
@protocol IGListScrollDelegate <NSObject>

/**
 Tells the delegate that the section controller was scrolled on screen.

 @param listAdapter       The list adapter whose collection view was scrolled.
 @param sectionController The visible section controller that was scrolled.
 */
- (void)listAdapter:(IGListAdapter *)listAdapter didScrollSectionController:(IGListSectionController <IGListSectionType> *)sectionController;

/**
 Tells the delegate that the section controller will be dragged on screen.

 @param listAdapter       The list adapter whose collection view will drag.
 @param sectionController The visible section controller that will drag.
 */
- (void)listAdapter:(IGListAdapter *)listAdapter willBeginDraggingSectionController:(IGListSectionController <IGListSectionType> *)sectionController;

/**
 Tells the delegate that the section controller did end dragging on screen.

 @param listAdapter       The list adapter whose collection view ended dragging.
 @param sectionController The visible section controller that ended dragging.
 */
- (void)listAdapter:(IGListAdapter *)listAdapter didEndDraggingSectionController:(IGListSectionController <IGListSectionType> *)sectionController willDecelerate:(BOOL)decelerate;

@end
