//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBAccountConfirmationUpdateContactPointView, FBContactPoint, FBPhoneInputHandler, FBUserSession, NSString, UIAlertView;
@protocol FBAccountConfirmationUpdateContactPointViewControllerDelegate;

@interface FBAccountConfirmationUpdateContactPointViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    FBContactPoint *_contactPoint;
    int _updateMode;
    FBUserSession *_session;
    id <FBAccountConfirmationUpdateContactPointViewControllerDelegate> _delegate;
    FBPhoneInputHandler *_inputHandler;
    FBAccountConfirmationUpdateContactPointView *_updateContactPointView;
    FBContactPoint *_currentContactPoint;
    UIAlertView *_errorAlertView;
}

@property(retain, nonatomic) UIAlertView *errorAlertView; // @synthesize errorAlertView=_errorAlertView;
@property(retain, nonatomic) FBContactPoint *currentContactPoint; // @synthesize currentContactPoint=_currentContactPoint;
@property(retain, nonatomic) FBAccountConfirmationUpdateContactPointView *updateContactPointView; // @synthesize updateContactPointView=_updateContactPointView;
@property(retain, nonatomic) FBPhoneInputHandler *inputHandler; // @synthesize inputHandler=_inputHandler;
@property(nonatomic) __weak id <FBAccountConfirmationUpdateContactPointViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) int updateMode; // @synthesize updateMode=_updateMode;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_displayErrorWithTitle:(id)arg1 message:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)_newContactPoint;
- (void)_handleSubmitNewContactPoint;
- (id)_titleForUpdateMode:(int)arg1;
- (BOOL)becomeFirstResponder;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithUpdateMode:(int)arg1 currentContactPoint:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

