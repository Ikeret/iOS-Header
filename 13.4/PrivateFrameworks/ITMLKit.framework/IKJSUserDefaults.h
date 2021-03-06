//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSUserDefaults-Protocol.h>

@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults>
{
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
- (void)removeData:(id)arg1;
- (void)setData:(id)arg1:(id)arg2;
- (id)getData:(id)arg1;
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;

@end

