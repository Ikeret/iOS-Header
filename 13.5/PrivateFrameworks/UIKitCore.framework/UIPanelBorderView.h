//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIPanelBorderReplicatingView;

@interface UIPanelBorderView : UIView
{
    _Bool _observesTime;
    long long _statusBarAvoidance;
    UIPanelBorderReplicatingView *_replicatingView;
    NSString *_backdropGroupName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) _Bool observesTime; // @synthesize observesTime=_observesTime;
@property(retain, nonatomic) UIPanelBorderReplicatingView *replicatingView; // @synthesize replicatingView=_replicatingView;
@property(nonatomic) long long statusBarAvoidance; // @synthesize statusBarAvoidance=_statusBarAvoidance;
- (id)_cachedBackdropGroupName;
- (void)layoutSubviews;

@end

