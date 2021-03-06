//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "CAAnimationDelegate.h"

@class NSString;

@interface VoipAlertView : MMUIWindow <CAAnimationDelegate>
{
    int _inviteType;
    id <VoipAlertViewDelegate> _mydelegate;
}

@property(nonatomic) id <VoipAlertViewDelegate> delegate; // @synthesize delegate=_mydelegate;
- (void)onInvite;
- (void)onCancel;
- (void)appearWithAnimation;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andInviteType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

