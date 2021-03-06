//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBReportingFlowCoordinator, FBReportingFlowMessageView, FBReportingFlowResponseModel, NSString;

@interface FBReportingFlowMessageViewController : UIViewController
{
    FBReportingFlowCoordinator *_coordinator;
    FBReportingFlowResponseModel *_responseModel;
    FBReportingFlowMessageView *_messageView;
    NSString *_targetFBID;
}

- (void).cxx_destruct;
- (void)recepientDidChange:(id)arg1 fbid:(id)arg2;
- (void)recepientButtonWasPressed;
- (void)sendButtonWasPressed;
- (void)backButtonWasPressed;
- (id)initWithCoordinator:(id)arg1 responseModel:(id)arg2;

@end

