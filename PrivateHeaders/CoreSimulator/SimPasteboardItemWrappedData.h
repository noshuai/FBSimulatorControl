//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/NSSecureCoding-Protocol.h>

@class NSData;

@interface SimPasteboardItemWrappedData : NSObject <NSSecureCoding>
{
    NSData *_wrappedData;
}

+ (BOOL)supportsSecureCoding;
@property (retain, nonatomic) NSData *wrappedData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end
