//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RCTRedBox : NSObject
{
}

+ (id)sharedInstance;
- (void)dismiss;
- (void)setNextBackgroundColor:(id)arg1;
- (id)currentErrorMessage;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2 showIfHidden:(BOOL)arg3;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withDetails:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showError:(id)arg1;

@end

