//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class RAPFixedProblemViewController;

__attribute__((visibility("hidden")))
@interface RAPFixedProblemNavigationController : UINavigationController
{
    CDUnknownBlockType doneHandler;
    RAPFixedProblemViewController *_fixedProblemViewController;
    CDUnknownBlockType _doneHandler;
}

+ (id)fixedProblemNavigationControllerWithProblemStatusResponse:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RAPFixedProblemViewController *fixedProblemViewController; // @synthesize fixedProblemViewController=_fixedProblemViewController;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
- (void)handleDone:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

@end

