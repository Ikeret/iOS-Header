//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRInternalExtrasFakeNotificationSender : NSObject
{
}

- (void)_scheduleFakeNewArticleNotification:(id)arg1 whenAppEntersBackground:(id)arg2;
- (void)_scheduleFakeChannelSupportNotification:(id)arg1;
- (void)scheduleAnyFakeNotificationsFromInternalExtras:(id)arg1 whenAppEntersBackground:(id)arg2;

@end

