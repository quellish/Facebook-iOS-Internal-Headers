//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemAvailablePhotoCategory, FBReactionAvailablePhotoCategoriesDownloader, NSArray, NSError;

@protocol FBReactionAvailablePhotoCategoriesDownloaderDelegate <NSObject>
- (void)categoryDownloader:(FBReactionAvailablePhotoCategoriesDownloader *)arg1 didFail:(NSError *)arg2;
- (void)categoryDownloader:(FBReactionAvailablePhotoCategoriesDownloader *)arg1 didFetchAvailableCategories:(NSArray *)arg2 primaryCategory:(FBMemAvailablePhotoCategory *)arg3;

@optional
- (void)categoryDownloaderDidCancel:(FBReactionAvailablePhotoCategoriesDownloader *)arg1;
@end

