//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBComposerAppAttributionBuilder : NSObject
{
    NSString *_appID;
    NSString *_name;
    NSString *_bundleID;
}

+ (id)composerAppAttributionFromExistingComposerAppAttribution:(id)arg1;
+ (id)composerAppAttribution;
- (void).cxx_destruct;
- (id)withBundleID:(id)arg1;
- (id)withName:(id)arg1;
- (id)withAppID:(id)arg1;
- (id)build;

@end

