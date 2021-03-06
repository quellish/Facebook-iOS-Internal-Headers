//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "_FBTweakCategoryViewControllerDelegate-Protocol.h"
#import "_FBTweakCollectionViewControllerDelegate-Protocol.h"

@class FBTweakStore, NSString;
@protocol FBTweakViewControllerDelegate;

@interface FBTweakViewController : UINavigationController <_FBTweakCategoryViewControllerDelegate, _FBTweakCollectionViewControllerDelegate>
{
    FBTweakStore *_store;
    id <FBTweakViewControllerDelegate> _tweaksDelegate;
}

@property(nonatomic) __weak id <FBTweakViewControllerDelegate> tweaksDelegate; // @synthesize tweaksDelegate=_tweaksDelegate;
- (void).cxx_destruct;
- (void)tweakCollectionViewControllerSelectedDone:(id)arg1;
- (void)tweakCategoryViewControllerSelectedDone:(id)arg1;
- (void)tweakCategoryViewController:(id)arg1 selectedCategory:(id)arg2;
- (id)initWithStore:(id)arg1 category:(id)arg2;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

