//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIRootWindowScenePresentationBinder.h>

@class NSMutableArray, UIRootSceneWindow, UIWindowScene;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder
{
    UIRootSceneWindow *_rootWindow;
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIRootSceneWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
- (void)_reconnectToRenderServer;
- (void)_disconnectFromRenderServer;
- (id)assertDisconnectionFromRenderServerForReason:(id)arg1;
- (id)init;

@end

