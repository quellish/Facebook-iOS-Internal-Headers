//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"

@class FBMemMoreAppsUnit, NSIndexPath, NSMutableArray, NSString, UITableView, UIView;

@protocol FBNativeAppFeedDataSource <UITableViewDataSource>
+ (NSMutableArray *)digitalGoodItemsWithFeedUnit:(FBMemMoreAppsUnit *)arg1;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSection:(int)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(int)arg2;
- (void)scheduleFeedUnitFetchWithLoadType:(unsigned int)arg1 refreshMode:(unsigned int)arg2;
- (void)hideItemAtIndexPath:(NSIndexPath *)arg1;
- (FBMemMoreAppsUnit *)feedUnitWithIndexPath:(NSIndexPath *)arg1;
- (struct CGSize)tableView:(UITableView *)arg1 sizeForSupplementaryElementOfKind:(NSString *)arg2 inSection:(int)arg3;
- (struct CGSize)sizeForCellWithIndexPath:(NSIndexPath *)arg1 renderStyle:(unsigned int)arg2;
@end

