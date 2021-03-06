//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class NSString;

@interface FBProductIntentTarget : FBIntentTarget
{
    NSString *_productID;
    NSString *_attachmentID;
}

+ (id)productDetailsComponentsUrlWithProductID:(id)arg1 attachmentID:(id)arg2;
+ (id)productTargetWithProductID:(id)arg1 attachmentID:(id)arg2;
@property(readonly, copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(readonly, copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;

@end

