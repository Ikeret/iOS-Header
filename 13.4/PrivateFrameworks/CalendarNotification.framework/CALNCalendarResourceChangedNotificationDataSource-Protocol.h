//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNCalendarResourceChangedNotificationInfo, NSArray, NSSet, NSString;

@protocol CALNCalendarResourceChangedNotificationDataSource <NSObject>
- (void)clearCalendarResourceChangedNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (CALNCalendarResourceChangedNotificationInfo *)fetchCalendarResourceChangedNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchCalendarResourceChangedNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (NSArray *)fetchCalendarResourceChangedNotifications;
@end

