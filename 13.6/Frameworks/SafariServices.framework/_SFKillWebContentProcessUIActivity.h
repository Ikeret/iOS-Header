//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;

@interface _SFKillWebContentProcessUIActivity : _SFActivity
{
    id <_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate; // @synthesize webProcessDelegate=_webProcessDelegate;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;

@end

