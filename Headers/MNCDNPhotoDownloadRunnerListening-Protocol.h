//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MNCDNPhotoDownloadRequest, MNPhotoImage, NSError;

@protocol MNCDNPhotoDownloadRunnerListening <NSObject>
- (void)photoRunnerDidFailToDownloadPhotoWithError:(NSError *)arg1 forPhotoDownloadRequest:(MNCDNPhotoDownloadRequest *)arg2 forDownloadId:(long long)arg3;
- (void)photoRunnerDidFinishWithPhoto:(MNPhotoImage *)arg1 forPhotoDownloadRequest:(MNCDNPhotoDownloadRequest *)arg2 forDownloadId:(long long)arg3 isFinalResponse:(BOOL)arg4;
@end

