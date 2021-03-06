//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBReactionViewHiddenUnitsSettingsViewController, NSString;

@protocol FBReactionViewHiddenUnitsSettingsViewControllerDelegate <NSObject>
- (void)didEnableUnitSettingWithUnitTypeToken:(NSString *)arg1 totalNumUnitsEnabled:(unsigned int)arg2 withViewController:(FBReactionViewHiddenUnitsSettingsViewController *)arg3;
- (void)didToggleUnitWithUnitTypeToken:(NSString *)arg1 toEnabled:(BOOL)arg2 withViewController:(FBReactionViewHiddenUnitsSettingsViewController *)arg3;
- (void)hiddenUnitsSettingsDidChangeToActivated:(BOOL)arg1 withViewController:(FBReactionViewHiddenUnitsSettingsViewController *)arg2;
- (void)refreshHiddenUnitsSettingsWithViewController:(FBReactionViewHiddenUnitsSettingsViewController *)arg1;
@end

