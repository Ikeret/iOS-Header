//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, PHImportException;

@protocol PHImportExceptionRecorder <NSObject>
@property(nonatomic) _Bool hasTerminalException;
@property(readonly, nonatomic) NSMutableArray *criticalExceptions;
@property(readonly, nonatomic) NSMutableArray *terminalExceptions;
@property(readonly, nonatomic) NSMutableArray *exceptions;
- (NSArray *)exceptionsWithMinimumImportance:(unsigned long long)arg1;
- (NSArray *)exceptionsOfImportance:(unsigned long long)arg1;
- (NSString *)logForExceptionsOfMinImportance:(unsigned long long)arg1;
- (NSString *)logForExceptionsOfImportance:(unsigned long long)arg1;
- (void)addExceptions:(NSArray *)arg1;
- (void)addException:(PHImportException *)arg1;
- (PHImportException *)addExceptionWithMessage:(NSString *)arg1 path:(NSString *)arg2 importance:(unsigned long long)arg3 nsError:(NSError *)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
@end

