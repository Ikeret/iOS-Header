//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    NSString *_name;
    int _transition;
    CDUnknownBlockType _completion;
    double _curlUpRevealedHeight;
    UIViewController *_viewController;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setCurlUpRevealedHeight:) double _curlUpRevealedHeight; // @synthesize _curlUpRevealedHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool animated;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;

@end

