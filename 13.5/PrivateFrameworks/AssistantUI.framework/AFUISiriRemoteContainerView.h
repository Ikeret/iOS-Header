//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssistantUI/AFUISiriRemoteViewHosting-Protocol.h>

@class NSString;

@interface AFUISiriRemoteContainerView : UIView <AFUISiriRemoteViewHosting>
{
    UIView *_remoteContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

