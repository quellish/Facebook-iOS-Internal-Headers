//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class FBStoreLandscapeProductViewController, NSString, UIViewController;

@interface FBSideFeedProductPresentationController : NSObject <SKStoreProductViewControllerDelegate>
{
    FBStoreLandscapeProductViewController *_productViewController;
    UIViewController *_productPresentingViewController;
}

- (void).cxx_destruct;
- (void)_handleLoadProductForAppID:(id)arg1 fallbackURL:(id)arg2 result:(BOOL)arg3 error:(id)arg4;
- (void)_prepareProductViewControllerForAppID:(id)arg1 fallbackURL:(id)arg2;
- (void)showProductViewControllerFromView:(id)arg1 forAppID:(id)arg2 fallbackURL:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (id)initWithProductPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

