//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSString;

@interface FBCommerceProductDetailsDownloader : NSObject
{
    FBUserSession *_userSession;
    NSString *_productItemID;
}

- (void).cxx_destruct;
- (void)loadProductDetailsWithCachedCallback:(CDUnknownBlockType)arg1 downloadedCallback:(CDUnknownBlockType)arg2 failureCallback:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 productItemID:(id)arg2;

@end

