//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAssetsLibraryListener-Protocol.h"

@class FBAssetsLibrary, FBComposerLogger, FBUserSession, NSString;

@interface FBComposerAssetsLoggingController : NSObject <FBAssetsLibraryListener>
{
    FBComposerLogger *_logger;
    FBUserSession *_session;
    FBAssetsLibrary *_assetLibrary;
    BOOL _hasLoggedAssetCountForSession;
}

- (void).cxx_destruct;
- (void)assetsLibraryDidLoadAssets;
- (void)_disableLoggingForComposerSession;
- (BOOL)_logAssetCountIfPossibleAndNeeded;
- (void)logAssetCountIfNeeded:(BOOL)arg1;
- (void)dealloc;
- (id)initWithComposerLogger:(id)arg1 session:(id)arg2 assetLibrary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

