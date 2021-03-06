//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMediaUploadItemManager, NSError;
@protocol FBMediaUploadItemProtocol;

@protocol FBMediaUploadItemManagerDelegate <NSObject>
- (void)uploadManager:(FBMediaUploadItemManager *)arg1 didUploadMediaItem:(id <FBMediaUploadItemProtocol>)arg2 failWithError:(NSError *)arg3;
- (void)uploadManager:(FBMediaUploadItemManager *)arg1 didUpdateTotalProgress:(float)arg2;
- (void)uploadManager:(FBMediaUploadItemManager *)arg1 didFinishMediaUploadItem:(id <FBMediaUploadItemProtocol>)arg2;
- (void)uploadManager:(FBMediaUploadItemManager *)arg1 didStartMediaUploadItem:(id <FBMediaUploadItemProtocol>)arg2;
- (void)completedUploadAllMedia:(FBMediaUploadItemManager *)arg1;
@end

